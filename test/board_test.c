#include "../src/board.h"
#include "../thirdparty/ctest.h"

CTEST(expected_input_in_range, check)
{
    char steps[] = "a2a3e7e6";
    int inp = CheckInput(steps);
    const int EXP_INPUT = 1;

    ASSERT_EQUAL(EXP_INPUT, inp);
}

CTEST(expected_input_output_range, check)
{
    char steps2[] = "p90on5u8";
    int inp2 = CheckInput(steps2);
    const int EXP_OUT_INPUT = 0;

    ASSERT_EQUAL(EXP_OUT_INPUT, inp2);
}

CTEST(succes_turn, check)
{
    char chess_bor[9][9] = { { '8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' },
        { '7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
        { '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
        { '1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
        { ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' } };
    char steps3[] = "a2a3e7e6";
    int _turn = Move(steps3, chess_bor);
    const int EXP_TURN = 1;

    ASSERT_EQUAL(EXP_TURN, _turn);
}

CTEST(unsucces_turn, check)
{
    char chess_bo[9][9] = { { '8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' },
        { '7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
        { '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
        { '1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
        { ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' } };
    char steps4[] = "a3a4e7e6";
    int uns_turn = Move(steps4, chess_bo);
    const int UNEXP_TURN = 0;

    ASSERT_EQUAL(UNEXP_TURN, uns_turn);
}

CTEST(unsucces_turn2, check)
{
    char chess_b[9][9] = { { '8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' },
        { '7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
        { '6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
        { '2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
        { '1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
        { ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' } };
    char steps5[] = "a2a3e6e7";
    int uns_turn2 = Move(steps5, chess_b);
    const int UNEXP_TURN2 = 0;

    ASSERT_EQUAL(UNEXP_TURN2, uns_turn2);
}