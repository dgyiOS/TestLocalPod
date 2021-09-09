#ifndef Typesetting_Typesetting_h
#define Typesetting_Typesetting_h

#import "TypesetKit.h"
#import "TypesetKit+Color.h"
#import "TypesetKit+Match.h"
#import "NSString+Typeset.h"
#import "NSMutableAttributedString+Typeset.h"


#define TSBlock(block) ^(NSString *s) { return s.typeset.block.string; }

#endif
