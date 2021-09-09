#import "Typeset.h"

@interface TypesetKit (Match)

- (TypesetUIntegerBlock)from;
- (TypesetUIntegerBlock)to;
- (TypesetUIntegerBlock)location;
- (TypesetUIntegerBlock)length;
- (TypesetRangeBlock)range;
- (TypesetStringBlock)match;
- (TypesetStringBlock)matchLast;
- (TypesetMatchBlock)matchWithOptions;
- (TypesetStringBlock)matchAll;
- (TypesetMatchBlock)matchAllWithOptions;

- (TypesetStringBlock)matchAllWithPattern;
- (TypesetBlock(NSString *, NSRegularExpressionOptions))matchAllWithPatternAndOptions;

- (TypesetKit *)matchNumbers;
- (TypesetKit *)matchLetters;
- (TypesetStringBlock)matchLanguage;
- (TypesetKit *)matchChinese;

- (TypesetKit *)all;

@end
