//
//  ViewController.h
//  kxmovieapp
//
//  Created by Kolyvan on 11.10.12.
//  Copyright (c) 2012 Konstantin Boukreev . All rights reserved.
//
//  https://github.com/kolyvan/kxmovie
//  this file is part of KxMovie
//  KxMovie is licenced under the LGPL v3, see lgpl-3.0.txt

#import <UIKit/UIKit.h>

@class KxMovieDecoder;

extern NSString * const KxMovieParameterMinBufferedDuration;    // Float
extern NSString * const KxMovieParameterMaxBufferedDuration;    // Float
extern NSString * const KxMovieParameterDisableDeinterlacing;   // BOOL

@interface KxMovieViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

+ (id) movieViewControllerWithContentPath: (NSString *) path
                               parameters: (NSDictionary *) parameters;

@property (readonly) BOOL playing;
@property (nonatomic, assign) BOOL isHUDHidden;
@property (nonatomic, assign) BOOL isSpinnerHidden;
@property (nonatomic, assign) BOOL isDoneButtonHidden;
@property (nonatomic, assign) BOOL isInfoButtonHidden;

- (void) play;
- (void) pause;

@end
