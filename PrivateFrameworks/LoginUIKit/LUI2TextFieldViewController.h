//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@class LUI2TextField, LUI2TextFieldBackgroundView;

@interface LUI2TextFieldViewController : LUI2ViewController
{
    LUI2TextField *_textField;
    LUI2TextFieldBackgroundView *_backgroundView;
}

@property(retain) LUI2TextFieldBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly) LUI2TextField *textField; // @synthesize textField=_textField;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)setEnabled:(BOOL)arg1;

@end

