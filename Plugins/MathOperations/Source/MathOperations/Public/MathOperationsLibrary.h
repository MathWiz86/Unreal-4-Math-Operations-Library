// All content © 2021 Craig Joseph Williams. All Rights Reserved.
// Project: Math Operations Library
// Author: Craig Williams

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathOperationsLibrary.generated.h"

/**
 * A toolkit of mathematical operations for Blueprints. This includes conversions, operators for
 * each combination of value types, and direct setters, such as the '+=' operator.
 */
UCLASS()
class MATHOPERATIONS_API UMathOperationsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
  UFUNCTION(BlueprintPure, meta = (DisplayName = "ToInt64 (Byte)", CompactNodeTitle = "->", Keywords = "Cast,Convert,integer64", BlueprintAutocast), Category = "UKIT|Math|Conversions")
  /**
   * A function to convert a byte to a 64-bit integer.
   * @param value - The byte [uint8] being converted.
   * @returns - The casted int64.
   */
  static int64 Conv_ByteToInt64(uint8 value);

  UFUNCTION(BlueprintPure, meta = (DisplayName = "ToFloat (Int64)", CompactNodeTitle = "->", Keywords = "Cast,Convert,integer64", BlueprintAutocast), Category = "UKIT|Math|Conversions")
  /**
   * A function to convert a 64-bit integer to a float.
   * @param value - The int64 being converted.
   * @returns - The casted float.
   */
  static float Conv_Int64ToFloat(int64 value);

  UFUNCTION(BlueprintPure, meta = (DisplayName = "ToByte (Float)", CompactNodeTitle = "->", Keywords = "Cast,Convert", BlueprintAutocast), Category = "UKIT|Math|Conversions")
  /**
   * A function to convert a 64-bit integer to a byte.
   * @param value - The int64 being converted.
   * @returns - The casted byte [uint8].
   */
  static uint8 Conv_FloatToByte(float value);

private:
  UFUNCTION(BlueprintPure, meta = (DisplayName = "Make Literal Int64", Keywords = "Integer64", BlueprintAutocast), Category = "UKIT|Math|Literals")
  /**
   * A quick way to make a literal 64-bit integer value.
   * @param value - The int64 value.
   * @returns - The literal int64 value.
   */
  static void MakeLiteralInt64(const int64 value, int64& literal);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "byte + integer"))
  /**
   * A function to increment a byte by some additional integer.
   * @param value - The byte [uint8] being added to.
   * @param addition - The int32 being added to the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_BytePlusInt(const uint8 value, const int32 addition, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "byte + integer64"))
  /**
   * A function to increment a byte by some additional 64-bit integer.
   * @param value - The byte [uint8] being added to.
   * @param addition - The int64 being added to the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_BytePlusInt64(const uint8 value, const int64 addition, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "byte + float"))
  /**
   * A function to increment a byte by some additional float.
   * @param value - The byte [uint8] being added to.
   * @param addition - The float being added to the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_BytePlusFloat(const uint8 value, const float addition, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "integer + byte"))
  /**
   * A function to increment a integer by some additional byte.
   * @param value - The int32 being added to.
   * @param addition - The byte [uint8] being added to the int32.
   * @param output - The resulting int32.
   */
  static void BP_IntPlusByte(const int32 value, const uint8 addition, int32& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "integer + integer64"))
  /**
   * A function to increment an integer by some additional 64-bit integer.
   * @param value - The integer being added to.
   * @param addition - The int64 being added to the integer.
   * @param output - The resulting integer.
   */
  static void BP_IntPlusInt64(const int32 value, const int64 addition, int32& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "integer + float"))
  /**
   * A function to increment a integer by some additional float.
   * @param value - The integer being added to.
   * @param addition - The float being added to the integer.
   * @param output - The resulting integer.
   */
  static void BP_IntPlusFloat(const int32 value, const float addition, int32& output);
  
  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "integer64 + byte"))
  /**
   * A function to increment a 64-bit integer by some additional byte.
   * @param value - The int64 being added to.
   * @param addition - The byte [uint8] being added to the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64PlusByte(const int64 value, const uint8 addition, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "integer64 + integer"))
  /**
   * A function to increment a 64-bit integer by some additional integer.
   * @param value - The int64 being added to.
   * @param addition - The int32 being added to the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64PlusInt(const int64 value, const int32 addition, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "integer64 + float"))
  /**
   * A function to increment a 64-bit integer by some additional float.
   * @param value - The int64 being added to.
   * @param addition - The float being added to the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64PlusFloat(const int64 value, const float addition, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "float + byte"))
  /**
   * A function to increment a float by some additional byte.
   * @param value - The float being added to.
   * @param addition - The byte [uint8] being added to the float.
   * @param output - The resulting float.
   */
  static void BP_FloatPlusByte(const float value, const uint8 addition, float& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "float + integer"))
  /**
   * A function to increment a float by some additional integer.
   * @param value - The float being added to.
   * @param addition - The int32 being added to the float.
   * @param output - The resulting float.
   */
  static void BP_FloatPlusInt(const float value, const int32 addition, float& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+", DisplayName = "float + integer64"))
  /**
   * A function to increment a float by some additional 64-bit integer.
   * @param value - The float being added to.
   * @param addition - The int64 being added to the float.
   * @param output - The resulting float.
   */
  static void BP_FloatPlusInt64(const float value, const int64 addition, float& output);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "byte += byte"))
  /**
   * A function to directly increment a byte by some additional byte.
   * @param value - The byte [uint8] being added to.
   * @param addition - The byte [uint8] being added to the byte.
   */
  static void BP_BytePlusEqualsByte(UPARAM(Ref) uint8& value, const uint8 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "byte += integer"))
  /**
   * A function to directly increment a byte by some additional integer.
   * @param value - The byte [uint8] being added to.
   * @param addition - The int32 being added to the byte.
   */
  static void BP_BytePlusEqualsInt(UPARAM(Ref) uint8& value, const int32 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "byte += integer64"))
  /**
   * A function to directly increment a byte by some additional 64-bit integer.
   * @param value - The byte [uint8] being added to.
   * @param addition - The int64 being added to the byte.
   */
  static void BP_BytePlusEqualsInt64(UPARAM(Ref) uint8& value, const int64 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "byte += float"))
  /**
   * A function to directly increment a byte by some additional float.
   * @param value - The byte [uint8] being added to.
   * @param addition - The float being added to the byte.
   */
  static void BP_BytePlusEqualsFloat(UPARAM(Ref) uint8& value, const float addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "integer += byte"))
  /**
   * A function to directly increment a integer by some additional byte.
   * @param value - The int32 being added to.
   * @param addition - The byte [uint8] being added to the int32.
   */
  static void BP_IntPlusEqualsByte(UPARAM(Ref) int32& value, const uint8 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "integer += integer"))
  /**
   * A function to directly increment a integer by some additional integer.
   * @param value - The int32 being added to.
   * @param addition - The int32 being added to the int32.
   */
  static void BP_IntPlusEqualsInt(UPARAM(Ref) int32& value, const int32 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "integer += integer64"))
  /**
   * A function to directly increment a integer by some additional integer.
   * @param value - The int32 being added to.
   * @param addition - The int64 being added to the int32.
   */
  static void BP_IntPlusEqualsInt64(UPARAM(Ref) int32& value, const int64 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "integer += float"))
  /**
   * A function to directly increment a integer by some additional float.
   * @param value - The int32 being added to.
   * @param addition - The float being added to the int32.
   */
  static void BP_IntPlusEqualsFloat(UPARAM(Ref) int32& value, const float addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "integer64 += byte"))
  /**
   * A function to directly increment a 64-bit integer by some additional byte.
   * @param value - The int64 being added to.
   * @param addition - The byte [uint8] being added to the int64.
   */
  static void BP_Int64PlusEqualsByte(UPARAM(Ref) int64& value, const uint8 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "integer64 += integer"))
  /**
   * A function to directly increment a 64-bit integer by some additional integer.
   * @param value - The int64 being added to.
   * @param addition - The int32 being added to the int64.
   */
  static void BP_Int64PlusEqualsInt(UPARAM(Ref) int64& value, const int32 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "integer64 += integer64"))
  /**
   * A function to directly increment a 64-bit integer by some additional 64-bit integer.
   * @param value - The int64 being added to.
   * @param addition - The int64 being added to the int64.
   */
  static void BP_Int64PlusEqualsInt64(UPARAM(Ref) int64& value, const int64 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "integer64 += float"))
  /**
   * A function to directly increment a 64-bit integer by some additional float.
   * @param value - The int64 being added to.
   * @param addition - The float being added to the int64.
   */
  static void BP_Int64PlusEqualsFloat(UPARAM(Ref) int64& value, const float addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "float += byte"))
  /**
   * A function to directly increment a float by some additional byte.
   * @param value - The float being added to.
   * @param addition - The byte [uint8] being added to the float.
   */
  static void BP_FloatPlusEqualsByte(UPARAM(Ref) float& value, const uint8 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "float += integer"))
  /**
   * A function to directly increment a float by some additional integer.
   * @param value - The float being added to.
   * @param addition - The int32 being added to the float.
   */
  static void BP_FloatPlusEqualsInt(UPARAM(Ref) float& value, const int32 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "float += integer64"))
  /**
   * A function to directly increment a float by some additional 64-bit integer.
   * @param value - The float being added to.
   * @param addition - The int64 being added to the float.
   */
  static void BP_FloatPlusEqualsInt64(UPARAM(Ref) float& value, const int64 addition);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "+=", DisplayName = "float += float"))
  /**
   * A function to directly increment a float by some additional float.
   * @param value - The float being added to.
   * @param addition - The float being added to the float.
   */
  static void BP_FloatPlusEqualsFloat(UPARAM(Ref) float& value, const float addition);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "byte - integer"))
  /**
   * A function to decrement a byte by some integer.
   * @param value - The byte [uint8] being subtracted from.
   * @param subtraction - The int32 being subtracted from the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteMinusInt(const uint8 value, const int32 subtraction, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "byte - integer64"))
  /**
   * A function to decrement a byte by some 64-bit integer.
   * @param value - The byte [uint8] being subtracted from.
   * @param subtraction - The int64 being subtracted from the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteMinusInt64(const uint8 value, const int64 subtraction, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "byte - float"))
  /**
   * A function to decrement a byte by some float.
   * @param value - The byte [uint8] being subtracted from.
   * @param subtraction - The float being subtracted from the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteMinusFloat(const uint8 value, const float subtraction, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "integer - byte"))
  /**
   * A function to decrement a integer by some byte.
   * @param value - The int32 being subtracted from.
   * @param subtraction - The byte [uint8] being subtracted from the int32.
   * @param output - The resulting int32.
   */
  static void BP_IntMinusByte(const int32 value, const uint8 subtraction, int32& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "integer - integer64"))
  /**
   * A function to decrement an integer by some 64-bit integer.
   * @param value - The integer being subtracted from.
   * @param subtraction - The int64 being subtracted from the integer.
   * @param output - The resulting integer.
   */
  static void BP_IntMinusInt64(const int32 value, const int64 subtraction, int32& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "integer - float"))
  /**
   * A function to decrement a integer by some float.
   * @param value - The integer being subtracted from.
   * @param subtraction - The float being subtracted from the integer.
   * @param output - The resulting integer.
   */
  static void BP_IntMinusFloat(const int32 value, const float subtraction, int32& output);
  
  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "integer64 - byte"))
  /**
   * A function to decrement a 64-bit integer by some byte.
   * @param value - The int64 being subtracted from.
   * @param subtraction - The byte [uint8] being subtracted from the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64MinusByte(const int64 value, const uint8 subtraction, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "integer64 - integer"))
  /**
   * A function to decrement a 64-bit integer by some integer.
   * @param value - The int64 being subtracted from.
   * @param subtraction - The int32 being subtracted from the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64MinusInt(const int64 value, const int32 subtraction, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "integer64 - float"))
  /**
   * A function to decrement a 64-bit integer by some float.
   * @param value - The int64 being subtracted from.
   * @param subtraction - The float being subtracted from the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64MinusFloat(const int64 value, const float subtraction, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "float - byte"))
  /**
   * A function to decrement a float by some byte.
   * @param value - The float being subtracted from.
   * @param subtraction - The byte [uint8] being subtracted from the float.
   * @param output - The resulting float.
   */
  static void BP_FloatMinusByte(const float value, const uint8 subtraction, float& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "float - integer"))
  /**
   * A function to decrement a float by some integer.
   * @param value - The float being subtracted from.
   * @param subtraction - The int32 being subtracted from the float.
   * @param output - The resulting float.
   */
  static void BP_FloatMinusInt(const float value, const int32 subtraction, float& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-", DisplayName = "float - integer64"))
  /**
   * A function to decrement a float by some 64-bit integer.
   * @param value - The float being subtracted from.
   * @param subtraction - The int64 being subtracted from the float.
   * @param output - The resulting float.
   */
  static void BP_FloatMinusInt64(const float value, const int64 subtraction, float& output);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "byte -= byte"))
  /**
   * A function to directly decrement a byte by some byte.
   * @param value - The byte [uint8] being subtracted from.
   * @param subtraction - The byte [uint8] being subtracted from the byte.
   */
  static void BP_ByteMinusEqualsByte(UPARAM(Ref) uint8& value, const uint8 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "byte -= integer"))
  /**
   * A function to directly decrement a byte by some integer.
   * @param value - The byte [uint8] being subtracted from.
   * @param subtraction - The int32 being subtracted from the byte.
   */
  static void BP_ByteMinusEqualsInt(UPARAM(Ref) uint8& value, const int32 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "byte -= integer64"))
  /**
   * A function to directly decrement a byte by some 64-bit integer.
   * @param value - The byte [uint8] being subtracted from.
   * @param subtraction - The int64 being subtracted from the byte.
   */
  static void BP_ByteMinusEqualsInt64(UPARAM(Ref) uint8& value, const int64 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "byte -= float"))
  /**
   * A function to directly decrement a byte by some float.
   * @param value - The byte [uint8] being subtracted from.
   * @param subtraction - The float being subtracted from the byte.
   */
  static void BP_ByteMinusEqualsFloat(UPARAM(Ref) uint8& value, const float subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "integer -= byte"))
  /**
   * A function to directly decrement a integer by some byte.
   * @param value - The int32 being subtracted from.
   * @param subtraction - The byte [uint8] being subtracted from the int32.
   */
  static void BP_IntMinusEqualsByte(UPARAM(Ref) int32& value, const uint8 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "integer -= integer"))
  /**
   * A function to directly decrement a integer by some integer.
   * @param value - The int32 being subtracted from.
   * @param subtraction - The int32 being subtracted from the int32.
   */
  static void BP_IntMinusEqualsInt(UPARAM(Ref) int32& value, const int32 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "integer -= integer64"))
  /**
   * A function to directly decrement a integer by some integer.
   * @param value - The int32 being subtracted from.
   * @param subtraction - The int64 being subtracted from the int32.
   */
  static void BP_IntMinusEqualsInt64(UPARAM(Ref) int32& value, const int64 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "integer -= float"))
  /**
   * A function to directly decrement a integer by some float.
   * @param value - The int32 being subtracted from.
   * @param subtraction - The float being subtracted from the int32.
   */
  static void BP_IntMinusEqualsFloat(UPARAM(Ref) int32& value, const float subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "integer64 -= byte"))
  /**
   * A function to directly decrement a 64-bit integer by some byte.
   * @param value - The int64 being subtracted from.
   * @param subtraction - The byte [uint8] being subtracted from the int64.
   */
  static void BP_Int64MinusEqualsByte(UPARAM(Ref) int64& value, const uint8 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "integer64 -= integer"))
  /**
   * A function to directly decrement a 64-bit integer by some integer.
   * @param value - The int64 being subtracted from.
   * @param subtraction - The int32 being subtracted from the int64.
   */
  static void BP_Int64MinusEqualsInt(UPARAM(Ref) int64& value, const int32 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "integer64 -= integer64"))
  /**
   * A function to directly decrement a 64-bit integer by some 64-bit integer.
   * @param value - The int64 being subtracted from.
   * @param subtraction - The int64 being subtracted from the int64.
   */
  static void BP_Int64MinusEqualsInt64(UPARAM(Ref) int64& value, const int64 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "integer64 -= float"))
  /**
   * A function to directly decrement a 64-bit integer by some float.
   * @param value - The int64 being subtracted from.
   * @param subtraction - The float being subtracted from the int64.
   */
  static void BP_Int64MinusEqualsFloat(UPARAM(Ref) int64& value, const float subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "float -= byte"))
  /**
   * A function to directly decrement a float by some byte.
   * @param value - The float being subtracted from.
   * @param subtraction - The byte [uint8] being subtracted from the float.
   */
  static void BP_FloatMinusEqualsByte(UPARAM(Ref) float& value, const uint8 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "float -= integer"))
  /**
   * A function to directly decrement a float by some integer.
   * @param value - The float being subtracted from.
   * @param subtraction - The int32 being subtracted from the float.
   */
  static void BP_FloatMinusEqualsInt(UPARAM(Ref) float& value, const int32 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "float -= integer64"))
  /**
   * A function to directly decrement a float by some 64-bit integer.
   * @param value - The float being subtracted from.
   * @param subtraction - The int64 being subtracted from the float.
   */
  static void BP_FloatMinusEqualsInt64(UPARAM(Ref) float& value, const int64 subtraction);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "-=", DisplayName = "float -= float"))
  /**
   * A function to directly decrement a float by some float.
   * @param value - The float being subtracted from.
   * @param subtraction - The float being subtracted from the float.
   */
  static void BP_FloatMinusEqualsFloat(UPARAM(Ref) float& value, const float subtraction);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "byte * integer"))
  /**
   * A function to increment a byte by some integer.
   * @param value - The byte [uint8] being multiplied by.
   * @param multiplication - The int32 being multiplied by the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteTimesInt(const uint8 value, const int32 multiplication, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "byte * integer64"))
  /**
   * A function to increment a byte by some 64-bit integer.
   * @param value - The byte [uint8] being multiplied by.
   * @param multiplication - The int64 being multiplied by the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteTimesInt64(const uint8 value, const int64 multiplication, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "byte * float"))
  /**
   * A function to increment a byte by some float.
   * @param value - The byte [uint8] being multiplied by.
   * @param multiplication - The float being multiplied by the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteTimesFloat(const uint8 value, const float multiplication, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "integer * byte"))
  /**
   * A function to increment a integer by some byte.
   * @param value - The int32 being multiplied by.
   * @param multiplication - The byte [uint8] being multiplied by the int32.
   * @param output - The resulting int32.
   */
  static void BP_IntTimesByte(const int32 value, const uint8 multiplication, int32& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "integer * integer64"))
  /**
   * A function to increment an integer by some 64-bit integer.
   * @param value - The integer being multiplied by.
   * @param multiplication - The int64 being multiplied by the integer.
   * @param output - The resulting integer.
   */
  static void BP_IntTimesInt64(const int32 value, const int64 multiplication, int32& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "integer * float"))
  /**
   * A function to increment a integer by some float.
   * @param value - The integer being multiplied by.
   * @param multiplication - The float being multiplied by the integer.
   * @param output - The resulting integer.
   */
  static void BP_IntTimesFloat(const int32 value, const float multiplication, int32& output);
  
  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "integer64 * byte"))
  /**
   * A function to increment a 64-bit integer by some byte.
   * @param value - The int64 being multiplied by.
   * @param multiplication - The byte [uint8] being multiplied by the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64TimesByte(const int64 value, const uint8 multiplication, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "integer64 * integer"))
  /**
   * A function to increment a 64-bit integer by some integer.
   * @param value - The int64 being multiplied by.
   * @param multiplication - The int32 being multiplied by the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64TimesInt(const int64 value, const int32 multiplication, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "integer64 * float"))
  /**
   * A function to increment a 64-bit integer by some float.
   * @param value - The int64 being multiplied by.
   * @param multiplication - The float being multiplied by the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64TimesFloat(const int64 value, const float multiplication, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "float * byte"))
  /**
   * A function to increment a float by some byte.
   * @param value - The float being multiplied by.
   * @param multiplication - The byte [uint8] being multiplied by the float.
   * @param output - The resulting float.
   */
  static void BP_FloatTimesByte(const float value, const uint8 multiplication, float& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "float * integer"))
  /**
   * A function to increment a float by some integer.
   * @param value - The float being multiplied by.
   * @param multiplication - The int32 being multiplied by the float.
   * @param output - The resulting float.
   */
  static void BP_FloatTimesInt(const float value, const int32 multiplication, float& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*", DisplayName = "float * integer64"))
  /**
   * A function to increment a float by some 64-bit integer.
   * @param value - The float being multiplied by.
   * @param multiplication - The int64 being multiplied by the float.
   * @param output - The resulting float.
   */
  static void BP_FloatTimesInt64(const float value, const int64 multiplication, float& output);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "byte *= byte"))
  /**
   * A function to directly increment a byte by some byte.
   * @param value - The byte [uint8] being multiplied by.
   * @param multiplication - The byte [uint8] being multiplied by the byte.
   */
  static void BP_ByteTimesEqualsByte(UPARAM(Ref) uint8& value, const uint8 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "byte *= integer"))
  /**
   * A function to directly increment a byte by some integer.
   * @param value - The byte [uint8] being multiplied by.
   * @param multiplication - The int32 being multiplied by the byte.
   */
  static void BP_ByteTimesEqualsInt(UPARAM(Ref) uint8& value, const int32 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "byte *= integer64"))
  /**
   * A function to directly increment a byte by some 64-bit integer.
   * @param value - The byte [uint8] being multiplied by.
   * @param multiplication - The int64 being multiplied by the byte.
   */
  static void BP_ByteTimesEqualsInt64(UPARAM(Ref) uint8& value, const int64 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "byte *= float"))
  /**
   * A function to directly increment a byte by some float.
   * @param value - The byte [uint8] being multiplied by.
   * @param multiplication - The float being multiplied by the byte.
   */
  static void BP_ByteTimesEqualsFloat(UPARAM(Ref) uint8& value, const float multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "integer *= byte"))
  /**
   * A function to directly increment a integer by some byte.
   * @param value - The int32 being multiplied by.
   * @param multiplication - The byte [uint8] being multiplied by the int32.
   */
  static void BP_IntTimesEqualsByte(UPARAM(Ref) int32& value, const uint8 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "integer *= integer"))
  /**
   * A function to directly increment a integer by some integer.
   * @param value - The int32 being multiplied by.
   * @param multiplication - The int32 being multiplied by the int32.
   */
  static void BP_IntTimesEqualsInt(UPARAM(Ref) int32& value, const int32 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "integer *= integer64"))
  /**
   * A function to directly increment a integer by some integer.
   * @param value - The int32 being multiplied by.
   * @param multiplication - The int64 being multiplied by the int32.
   */
  static void BP_IntTimesEqualsInt64(UPARAM(Ref) int32& value, const int64 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "integer *= float"))
  /**
   * A function to directly increment a integer by some float.
   * @param value - The int32 being multiplied by.
   * @param multiplication - The float being multiplied by the int32.
   */
  static void BP_IntTimesEqualsFloat(UPARAM(Ref) int32& value, const float multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "integer64 *= byte"))
  /**
   * A function to directly increment a 64-bit integer by some byte.
   * @param value - The int64 being multiplied by.
   * @param multiplication - The byte [uint8] being multiplied by the int64.
   */
  static void BP_Int64TimesEqualsByte(UPARAM(Ref) int64& value, const uint8 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "integer64 *= integer"))
  /**
   * A function to directly increment a 64-bit integer by some integer.
   * @param value - The int64 being multiplied by.
   * @param multiplication - The int32 being multiplied by the int64.
   */
  static void BP_Int64TimesEqualsInt(UPARAM(Ref) int64& value, const int32 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "integer64 *= integer64"))
  /**
   * A function to directly increment a 64-bit integer by some 64-bit integer.
   * @param value - The int64 being multiplied by.
   * @param multiplication - The int64 being multiplied by the int64.
   */
  static void BP_Int64TimesEqualsInt64(UPARAM(Ref) int64& value, const int64 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "integer64 *= float"))
  /**
   * A function to directly increment a 64-bit integer by some float.
   * @param value - The int64 being multiplied by.
   * @param multiplication - The float being multiplied by the int64.
   */
  static void BP_Int64TimesEqualsFloat(UPARAM(Ref) int64& value, const float multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "float *= byte"))
  /**
   * A function to directly increment a float by some byte.
   * @param value - The float being multiplied by.
   * @param multiplication - The byte [uint8] being multiplied by the float.
   */
  static void BP_FloatTimesEqualsByte(UPARAM(Ref) float& value, const uint8 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "float *= integer"))
  /**
   * A function to directly increment a float by some integer.
   * @param value - The float being multiplied by.
   * @param multiplication - The int32 being multiplied by the float.
   */
  static void BP_FloatTimesEqualsInt(UPARAM(Ref) float& value, const int32 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "float *= integer64"))
  /**
   * A function to directly increment a float by some 64-bit integer.
   * @param value - The float being multiplied by.
   * @param multiplication - The int64 being multiplied by the float.
   */
  static void BP_FloatTimesEqualsInt64(UPARAM(Ref) float& value, const int64 multiplication);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "*=", DisplayName = "float *= float"))
  /**
   * A function to directly increment a float by some float.
   * @param value - The float being multiplied by.
   * @param multiplication - The float being multiplied by the float.
   */
  static void BP_FloatTimesEqualsFloat(UPARAM(Ref) float& value, const float multiplication);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "byte / integer"))
  /**
   * A function to increment a byte by some integer.
   * @param value - The byte [uint8] being divided by.
   * @param divisor - The int32 being divided by the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteDividedByInt(const uint8 value, const int32 divisor, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "byte / integer64"))
  /**
   * A function to increment a byte by some 64-bit integer.
   * @param value - The byte [uint8] being divided by.
   * @param divisor - The int64 being divided by the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteDividedByInt64(const uint8 value, const int64 divisor, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "byte / float"))
  /**
   * A function to increment a byte by some float.
   * @param value - The byte [uint8] being divided by.
   * @param divisor - The float being divided by the byte [uint8].
   * @param output - The resulting byte [uint8].
   */
  static void BP_ByteDividedByFloat(const uint8 value, const float divisor, uint8& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "integer / byte"))
  /**
   * A function to increment a integer by some byte.
   * @param value - The int32 being divided by.
   * @param divisor - The byte [uint8] being divided by the int32.
   * @param output - The resulting int32.
   */
  static void BP_IntDividedByByte(const int32 value, const uint8 divisor, int32& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "integer / integer64"))
  /**
   * A function to increment an integer by some 64-bit integer.
   * @param value - The integer being divided by.
   * @param divisor - The int64 being divided by the integer.
   * @param output - The resulting integer.
   */
  static void BP_IntDividedByInt64(const int32 value, const int64 divisor, int32& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "integer / float"))
  /**
   * A function to increment a integer by some float.
   * @param value - The integer being divided by.
   * @param divisor - The float being divided by the integer.
   * @param output - The resulting integer.
   */
  static void BP_IntDividedByFloat(const int32 value, const float divisor, int32& output);
  
  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "integer64 / byte"))
  /**
   * A function to increment a 64-bit integer by some byte.
   * @param value - The int64 being divided by.
   * @param divisor - The byte [uint8] being divided by the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64DividedByByte(const int64 value, const uint8 divisor, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "integer64 / integer"))
  /**
   * A function to increment a 64-bit integer by some integer.
   * @param value - The int64 being divided by.
   * @param divisor - The int32 being divided by the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64DividedByInt(const int64 value, const int32 divisor, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "integer64 / float"))
  /**
   * A function to increment a 64-bit integer by some float.
   * @param value - The int64 being divided by.
   * @param divisor - The float being divided by the int64.
   * @param output - The resulting int64.
   */
  static void BP_Int64DividedByFloat(const int64 value, const float divisor, int64& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "float / byte"))
  /**
   * A function to increment a float by some byte.
   * @param value - The float being divided by.
   * @param divisor - The byte [uint8] being divided by the float.
   * @param output - The resulting float.
   */
  static void BP_FloatDividedByByte(const float value, const uint8 divisor, float& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "float / integer"))
  /**
   * A function to increment a float by some integer.
   * @param value - The float being divided by.
   * @param divisor - The int32 being divided by the float.
   * @param output - The resulting float.
   */
  static void BP_FloatDividedByInt(const float value, const int32 divisor, float& output);

  UFUNCTION(BlueprintCallable, BlueprintPure, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/", DisplayName = "float / integer64"))
  /**
   * A function to increment a float by some 64-bit integer.
   * @param value - The float being divided by.
   * @param divisor - The int64 being divided by the float.
   * @param output - The resulting float.
   */
  static void BP_FloatDividedByInt64(const float value, const int64 divisor, float& output);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "byte /= byte"))
  /**
   * A function to directly increment a byte by some byte.
   * @param value - The byte [uint8] being divided by.
   * @param divisor - The byte [uint8] being divided by the byte.
   */
  static void BP_ByteDividedEqualsByte(UPARAM(Ref) uint8& value, const uint8 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "byte /= integer"))
  /**
   * A function to directly increment a byte by some integer.
   * @param value - The byte [uint8] being divided by.
   * @param divisor - The int32 being divided by the byte.
   */
  static void BP_ByteDividedEqualsInt(UPARAM(Ref) uint8& value, const int32 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "byte /= integer64"))
  /**
   * A function to directly increment a byte by some 64-bit integer.
   * @param value - The byte [uint8] being divided by.
   * @param divisor - The int64 being divided by the byte.
   */
  static void BP_ByteDividedEqualsInt64(UPARAM(Ref) uint8& value, const int64 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "byte /= float"))
  /**
   * A function to directly increment a byte by some float.
   * @param value - The byte [uint8] being divided by.
   * @param divisor - The float being divided by the byte.
   */
  static void BP_ByteDividedEqualsFloat(UPARAM(Ref) uint8& value, const float divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "integer /= byte"))
  /**
   * A function to directly increment a integer by some byte.
   * @param value - The int32 being divided by.
   * @param divisor - The byte [uint8] being divided by the int32.
   */
  static void BP_IntDividedEqualsByte(UPARAM(Ref) int32& value, const uint8 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "integer /= integer"))
  /**
   * A function to directly increment a integer by some integer.
   * @param value - The int32 being divided by.
   * @param divisor - The int32 being divided by the int32.
   */
  static void BP_IntDividedEqualsInt(UPARAM(Ref) int32& value, const int32 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "integer /= integer64"))
  /**
   * A function to directly increment a integer by some integer.
   * @param value - The int32 being divided by.
   * @param divisor - The int64 being divided by the int32.
   */
  static void BP_IntDividedEqualsInt64(UPARAM(Ref) int32& value, const int64 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "integer /= float"))
  /**
   * A function to directly increment a integer by some float.
   * @param value - The int32 being divided by.
   * @param divisor - The float being divided by the int32.
   */
  static void BP_IntDividedEqualsFloat(UPARAM(Ref) int32& value, const float divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "integer64 /= byte"))
  /**
   * A function to directly increment a 64-bit integer by some byte.
   * @param value - The int64 being divided by.
   * @param divisor - The byte [uint8] being divided by the int64.
   */
  static void BP_Int64DividedEqualsByte(UPARAM(Ref) int64& value, const uint8 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "integer64 /= integer"))
  /**
   * A function to directly increment a 64-bit integer by some integer.
   * @param value - The int64 being divided by.
   * @param divisor - The int32 being divided by the int64.
   */
  static void BP_Int64DividedEqualsInt(UPARAM(Ref) int64& value, const int32 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "integer64 /= integer64"))
  /**
   * A function to directly increment a 64-bit integer by some 64-bit integer.
   * @param value - The int64 being divided by.
   * @param divisor - The int64 being divided by the int64.
   */
  static void BP_Int64DividedEqualsInt64(UPARAM(Ref) int64& value, const int64 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "integer64 /= float"))
  /**
   * A function to directly increment a 64-bit integer by some float.
   * @param value - The int64 being divided by.
   * @param divisor - The float being divided by the int64.
   */
  static void BP_Int64DividedEqualsFloat(UPARAM(Ref) int64& value, const float divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "float /= byte"))
  /**
   * A function to directly increment a float by some byte.
   * @param value - The float being divided by.
   * @param divisor - The byte [uint8] being divided by the float.
   */
  static void BP_FloatDividedEqualsByte(UPARAM(Ref) float& value, const uint8 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "float /= integer"))
  /**
   * A function to directly increment a float by some integer.
   * @param value - The float being divided by.
   * @param divisor - The int32 being divided by the float.
   */
  static void BP_FloatDividedEqualsInt(UPARAM(Ref) float& value, const int32 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "float /= integer64"))
  /**
   * A function to directly increment a float by some 64-bit integer.
   * @param value - The float being divided by.
   * @param divisor - The int64 being divided by the float.
   */
  static void BP_FloatDividedEqualsInt64(UPARAM(Ref) float& value, const int64 divisor);

  UFUNCTION(BlueprintCallable, Category = "UKIT|Math|Operations", meta = (CompactNodeTitle = "/=", DisplayName = "float /= float"))
  /**
   * A function to directly increment a float by some float.
   * @param value - The float being divided by.
   * @param divisor - The float being divided by the float.
   */
  static void BP_FloatDividedEqualsFloat(UPARAM(Ref) float& value, const float divisor);
};
