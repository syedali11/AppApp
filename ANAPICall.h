//
//  ANAPICall.h
//  AppApp
//
//  Created by Zach Holmquist on 8/10/12.
//  Copyright (c) 2012 Sneakyness. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDWebService.h"

@interface ANAPICall : SDWebService

@property (nonatomic, readonly) NSString *userID;

+ (ANAPICall *)sharedAppAPI;

- (BOOL)hasAccessToken;

- (void)makePostWithText:(NSString*)text uiCompletionBlock:(SDWebServiceUICompletionBlock)uiCompletionBlock;
- (void)getGlobalStream:(SDWebServiceUICompletionBlock)uiCompletionBlock;
- (void)getUserStream:(SDWebServiceUICompletionBlock)uiCompletionBlock;
- (void)getUserPosts:(SDWebServiceUICompletionBlock)uiCompletionBlock;
- (void)getUserPosts:(NSString *)ID uiCompletionBlock:(SDWebServiceUICompletionBlock)uiCompletionBlock;
- (void)getUserMentions:(SDWebServiceUICompletionBlock)uiCompletionBlock;
- (void)getCurrentUser:(SDWebServiceUICompletionBlock)uiCompletionBlock;

@end

@protocol ANAPIDelegate <NSObject>
// ...
@end