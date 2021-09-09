#import <UIKit/UIKit.h>

@class TypesetKit;

@interface NSMutableAttributedString (Typeset)

- (TypesetKit *)typeset;

- (NSMutableAttributedString *(^)(id))append;

- (NSMutableAttributedString *(^)(UIColor *))color;
- (NSMutableAttributedString *(^)(NSUInteger))hexColor;
- (NSMutableAttributedString *(^)(NSUInteger))fontSize;
- (NSMutableAttributedString *(^)(NSString *))fontName;
- (NSMutableAttributedString *(^)(NSString *, CGFloat))font;


@end
