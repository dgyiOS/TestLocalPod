#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, TSFontWeight) {
    TSFontWeightRegular,
    TSFontWeightThin,
    TSFontWeightBold,
    TSFontWeightItalic,
    TSFontWeightLight
};

@interface UIFont (Weight)

- (UIFont *)fontWithFontWeight:(TSFontWeight)weight;

@end
