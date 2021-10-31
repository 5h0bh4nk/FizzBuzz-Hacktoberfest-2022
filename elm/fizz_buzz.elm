module FizzBuzz exposing (..)

import Html exposing (..)
import Html.Events exposing (onClick)


main : Program Never Model Msg
main =
    Html.beginnerProgram
        { model = initialModel
        , view = view
        , update = update
        }



-- LOGIC


fizzBuzz : Int -> String
fizzBuzz n =
    case ( rem n 5, rem n 3, n ) of
        ( 0, 0, _ ) ->
            "FizzBuzz"

        ( 0, _, _ ) ->
            "Buzz"

        ( _, 0, _ ) ->
            "Fizz"

        ( _, _, n ) ->
            toString n



-- MODEL


type alias Model =
    List Int


initialModel : Model
initialModel =
    List.range 1 20



-- UPDATE


type Msg
    = AddTen
    | RemoveTen


update : Msg -> Model -> Model
update msg model =
    case msg of
        AddTen ->
            List.length model
                + 10
                |> List.range 1

        RemoveTen ->
            let
                newListLengt =
                    if List.length model > 10 then
                        List.length model - 10
                    else
                        10
            in
                List.range 1 newListLengt



-- VIEW


fizzBuzzList : List Int -> List String
fizzBuzzList numbers =
    List.map fizzBuzz numbers


viewFizzBuzzListItem : String -> Html Msg
viewFizzBuzzListItem fbString =
    li [] [ text fbString ]


viewFizzBuzzList : Model -> Html Msg
viewFizzBuzzList model =
    let
        fizzBuzzLiList =
            fizzBuzzList model
                |> List.map viewFizzBuzzListItem
    in
        ul [] fizzBuzzLiList


view : Model -> Html Msg
view model =
    div []
        [ h1 [] [ text "FizzBuzzing" ]
        , button [ onClick RemoveTen ] [ text "-10" ]
        , button [ onClick AddTen ] [ text "+10" ]
        , viewFizzBuzzList model
        ]
