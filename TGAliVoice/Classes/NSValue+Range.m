#import "NSValue+Range.h"

@implementation NSValue (Range)

+ (NSValue *)valueWithLocation:(NSUInteger)location length:(NSUInteger)length {
    return [NSValue valueWithRange:NSMakeRange(location, length)];
}

@end
