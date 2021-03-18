// All content © 2021 Craig Joseph Williams. All Rights Reserved.
// Project: Math Operations Library
// Author: Craig Williams

#include "MathOperationsLibrary.h"

int64 UMathOperationsLibrary::Conv_ByteToInt64(uint8 value)
{
  return (int64)value;
}

float UMathOperationsLibrary::Conv_Int64ToFloat(int64 value)
{
  return (float)value;
}

uint8 UMathOperationsLibrary::Conv_FloatToByte(float value)
{
  return (uint8)value;
}

void UMathOperationsLibrary::MakeLiteralInt64(const int64 value, int64& literal)
{
  literal = value;
}

void UMathOperationsLibrary::BP_BytePlusInt(const uint8 value, const int32 addition, uint8& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_BytePlusInt64(const uint8 value, const int64 addition, uint8& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_BytePlusFloat(const uint8 value, const float addition, uint8& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_IntPlusByte(const int32 value, const uint8 addition, int32& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_IntPlusInt64(const int32 value, const int64 addition, int32& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_IntPlusFloat(const int32 value, const float addition, int32& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_Int64PlusByte(const int64 value, const uint8 addition, int64& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_Int64PlusInt(const int64 value, const int32 addition, int64& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_Int64PlusFloat(const int64 value, const float addition, int64& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_FloatPlusInt64(const float value, const int64 addition, float& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_FloatPlusInt(const float value, const int32 addition, float& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_FloatPlusByte(const float value, const uint8 addition, float& output)
{
  output = value + addition;
}

void UMathOperationsLibrary::BP_BytePlusEqualsByte(UPARAM(Ref)uint8& value, const uint8 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_BytePlusEqualsInt(UPARAM(Ref)uint8& value, const int32 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_BytePlusEqualsInt64(UPARAM(Ref)uint8& value, const int64 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_BytePlusEqualsFloat(UPARAM(Ref)uint8& value, const float addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_IntPlusEqualsByte(UPARAM(Ref)int32& value, const uint8 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_IntPlusEqualsInt(UPARAM(Ref)int32& value, const int32 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_IntPlusEqualsInt64(UPARAM(Ref)int32& value, const int64 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_IntPlusEqualsFloat(UPARAM(Ref)int32& value, const float addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_Int64PlusEqualsByte(UPARAM(Ref) int64& value, const uint8 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_Int64PlusEqualsInt(UPARAM(Ref) int64& value, const int32 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_Int64PlusEqualsInt64(UPARAM(Ref) int64& value, const int64 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_Int64PlusEqualsFloat(UPARAM(Ref) int64& value, const float addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_FloatPlusEqualsByte(UPARAM(Ref) float& value, const uint8 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_FloatPlusEqualsInt(UPARAM(Ref) float& value, const int32 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_FloatPlusEqualsInt64(UPARAM(Ref) float& value, const int64 addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_FloatPlusEqualsFloat(UPARAM(Ref) float& value, const float addition)
{
  value += addition;
}

void UMathOperationsLibrary::BP_ByteMinusInt(const uint8 value, const int32 subtraction, uint8& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_ByteMinusInt64(const uint8 value, const int64 subtraction, uint8& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_ByteMinusFloat(const uint8 value, const float subtraction, uint8& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_IntMinusByte(const int32 value, const uint8 subtraction, int32& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_IntMinusInt64(const int32 value, const int64 subtraction, int32& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_IntMinusFloat(const int32 value, const float subtraction, int32& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_Int64MinusByte(const int64 value, const uint8 subtraction, int64& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_Int64MinusInt(const int64 value, const int32 subtraction, int64& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_Int64MinusFloat(const int64 value, const float subtraction, int64& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_FloatMinusInt64(const float value, const int64 subtraction, float& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_FloatMinusInt(const float value, const int32 subtraction, float& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_FloatMinusByte(const float value, const uint8 subtraction, float& output)
{
  output = value - subtraction;
}

void UMathOperationsLibrary::BP_ByteMinusEqualsByte(UPARAM(Ref)uint8& value, const uint8 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_ByteMinusEqualsInt(UPARAM(Ref)uint8& value, const int32 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_ByteMinusEqualsInt64(UPARAM(Ref)uint8& value, const int64 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_ByteMinusEqualsFloat(UPARAM(Ref)uint8& value, const float subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_IntMinusEqualsByte(UPARAM(Ref)int32& value, const uint8 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_IntMinusEqualsInt(UPARAM(Ref)int32& value, const int32 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_IntMinusEqualsInt64(UPARAM(Ref)int32& value, const int64 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_IntMinusEqualsFloat(UPARAM(Ref)int32& value, const float subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_Int64MinusEqualsByte(UPARAM(Ref) int64& value, const uint8 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_Int64MinusEqualsInt(UPARAM(Ref) int64& value, const int32 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_Int64MinusEqualsInt64(UPARAM(Ref) int64& value, const int64 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_Int64MinusEqualsFloat(UPARAM(Ref) int64& value, const float subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_FloatMinusEqualsByte(UPARAM(Ref) float& value, const uint8 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_FloatMinusEqualsInt(UPARAM(Ref) float& value, const int32 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_FloatMinusEqualsInt64(UPARAM(Ref) float& value, const int64 subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_FloatMinusEqualsFloat(UPARAM(Ref) float& value, const float subtraction)
{
  value -= subtraction;
}

void UMathOperationsLibrary::BP_ByteTimesInt(const uint8 value, const int32 multiplication, uint8& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_ByteTimesInt64(const uint8 value, const int64 multiplication, uint8& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_ByteTimesFloat(const uint8 value, const float multiplication, uint8& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_IntTimesByte(const int32 value, const uint8 multiplication, int32& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_IntTimesInt64(const int32 value, const int64 multiplication, int32& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_IntTimesFloat(const int32 value, const float multiplication, int32& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_Int64TimesByte(const int64 value, const uint8 multiplication, int64& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_Int64TimesInt(const int64 value, const int32 multiplication, int64& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_Int64TimesFloat(const int64 value, const float multiplication, int64& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_FloatTimesInt64(const float value, const int64 multiplication, float& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_FloatTimesInt(const float value, const int32 multiplication, float& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_FloatTimesByte(const float value, const uint8 multiplication, float& output)
{
  output = value * multiplication;
}

void UMathOperationsLibrary::BP_ByteTimesEqualsByte(UPARAM(Ref)uint8& value, const uint8 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_ByteTimesEqualsInt(UPARAM(Ref)uint8& value, const int32 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_ByteTimesEqualsInt64(UPARAM(Ref)uint8& value, const int64 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_ByteTimesEqualsFloat(UPARAM(Ref)uint8& value, const float multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_IntTimesEqualsByte(UPARAM(Ref)int32& value, const uint8 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_IntTimesEqualsInt(UPARAM(Ref)int32& value, const int32 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_IntTimesEqualsInt64(UPARAM(Ref)int32& value, const int64 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_IntTimesEqualsFloat(UPARAM(Ref)int32& value, const float multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_Int64TimesEqualsByte(UPARAM(Ref) int64& value, const uint8 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_Int64TimesEqualsInt(UPARAM(Ref) int64& value, const int32 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_Int64TimesEqualsInt64(UPARAM(Ref) int64& value, const int64 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_Int64TimesEqualsFloat(UPARAM(Ref) int64& value, const float multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_FloatTimesEqualsByte(UPARAM(Ref) float& value, const uint8 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_FloatTimesEqualsInt(UPARAM(Ref) float& value, const int32 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_FloatTimesEqualsInt64(UPARAM(Ref) float& value, const int64 multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_FloatTimesEqualsFloat(UPARAM(Ref) float& value, const float multiplication)
{
  value *= multiplication;
}

void UMathOperationsLibrary::BP_ByteDividedByInt(const uint8 value, const int32 divisor, uint8& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_ByteDividedByInt64(const uint8 value, const int64 divisor, uint8& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_ByteDividedByFloat(const uint8 value, const float divisor, uint8& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_IntDividedByByte(const int32 value, const uint8 divisor, int32& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_IntDividedByInt64(const int32 value, const int64 divisor, int32& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_IntDividedByFloat(const int32 value, const float divisor, int32& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_Int64DividedByByte(const int64 value, const uint8 divisor, int64& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_Int64DividedByInt(const int64 value, const int32 divisor, int64& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_Int64DividedByFloat(const int64 value, const float divisor, int64& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_FloatDividedByInt64(const float value, const int64 divisor, float& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_FloatDividedByInt(const float value, const int32 divisor, float& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_FloatDividedByByte(const float value, const uint8 divisor, float& output)
{
  output = value / divisor;
}

void UMathOperationsLibrary::BP_ByteDividedEqualsByte(UPARAM(Ref)uint8& value, const uint8 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_ByteDividedEqualsInt(UPARAM(Ref)uint8& value, const int32 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_ByteDividedEqualsInt64(UPARAM(Ref)uint8& value, const int64 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_ByteDividedEqualsFloat(UPARAM(Ref)uint8& value, const float divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_IntDividedEqualsByte(UPARAM(Ref)int32& value, const uint8 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_IntDividedEqualsInt(UPARAM(Ref)int32& value, const int32 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_IntDividedEqualsInt64(UPARAM(Ref)int32& value, const int64 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_IntDividedEqualsFloat(UPARAM(Ref)int32& value, const float divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_Int64DividedEqualsByte(UPARAM(Ref) int64& value, const uint8 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_Int64DividedEqualsInt(UPARAM(Ref) int64& value, const int32 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_Int64DividedEqualsInt64(UPARAM(Ref) int64& value, const int64 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_Int64DividedEqualsFloat(UPARAM(Ref) int64& value, const float divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_FloatDividedEqualsByte(UPARAM(Ref) float& value, const uint8 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_FloatDividedEqualsInt(UPARAM(Ref) float& value, const int32 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_FloatDividedEqualsInt64(UPARAM(Ref) float& value, const int64 divisor)
{
  value /= divisor;
}

void UMathOperationsLibrary::BP_FloatDividedEqualsFloat(UPARAM(Ref) float& value, const float divisor)
{
  value /= divisor;
}