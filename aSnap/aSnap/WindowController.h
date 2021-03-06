//
//  WindowController.h
//  1Snap
//
//  Created by olunx on 15/2/15.
//  Copyright (c) 2015年 olunx. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NSLabel.h"

@interface WindowController : NSWindowController

@property (weak) IBOutlet NSToolbarItem *iconRefresh;

@property (strong, nonatomic) IBOutlet NSView *contentView;
@property (strong, nonatomic) IBOutlet NSLabel *textView;
@property (strong, nonatomic) IBOutlet NSImageView *imageView;

- (IBAction)clickedRefresh:(id)sender;
- (IBAction)clickedSnap:(id)sender;
- (IBAction)clickedSave:(id)sender;
- (IBAction)clickedMore:(id)sender;

@property (nonatomic) int refreshCount;

typedef NS_ENUM(NSInteger, DeviceStatus){
    DeviceFound = 0,
    DeviceFoundMutiple = 1,
    DeviceNotFound = 2,
    DeviceNotAuthorize = 3,
    DeviceError = 4,
};

@end
