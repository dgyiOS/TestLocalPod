#import <UIKit/UIKit.h>

@class TypesetKit;

@interface NSString (Typeset)

- (TypesetKit *)typeset;

- (NSMutableAttributedString *)black;
- (NSMutableAttributedString *)darkGray;
- (NSMutableAttributedString *)lightGray;
- (NSMutableAttributedString *)white;
- (NSMutableAttributedString *)gray;
- (NSMutableAttributedString *)red;
- (NSMutableAttributedString *)green;
- (NSMutableAttributedString *)blue;
- (NSMutableAttributedString *)cyan;
- (NSMutableAttributedString *)yellow;
- (NSMutableAttributedString *)magenta;
- (NSMutableAttributedString *)orange;
- (NSMutableAttributedString *)purple;
- (NSMutableAttributedString *)brown;
- (NSMutableAttributedString *)clear;

- (NSMutableAttributedString *(^)(UIColor *))color;
- (NSMutableAttributedString *(^)(NSUInteger))hexColor;
- (NSMutableAttributedString *(^)(NSUInteger))fontSize;
- (NSMutableAttributedString *(^)(NSString *))fontName;
- (NSMutableAttributedString *(^)(NSString *, CGFloat))font;

- (BOOL)ty_containsString:(NSString *)aString;

@end
