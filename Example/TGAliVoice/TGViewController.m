//
//  TGViewController.m
//  TGAliVoice
//
//  Created by dgyiOS on 09/09/2021.
//  Copyright (c) 2021 dgyiOS. All rights reserved.
//

#import "TGViewController.h"
#import "Typeset.h"

@interface TGViewController ()

@end

@implementation TGViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    NSAttributedString *str = @"fuck".typeset.fontSize(18.f).hexColor(0x333333).string;
    NSLog(@"str --- %@", str);
    
    NSAttributedString *str2 = TSAttributedString(@"shit".hexColor(0x123456).fontSize(18.f));
    NSLog(@"str --- %@", str2);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
