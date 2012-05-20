//
//  SDWebImagePrefetcherDelegate.h
//  SDWebImage
//
//  Created by Elio Gonzalez on 5/20/12.
//  Copyright (c) 2012 Dailymotion. All rights reserved.
//

#import <Foundation/Foundation.h>
@class SDWebImagePrefetcher;
@protocol SDWebImagePrefetcherDelegate <NSObject>

@optional

-(void) SDWebImagePrefetcher: (SDWebImagePrefetcher*) prefetcher finished:(NSUInteger) finishedCount outOf: (NSUInteger) totalCount;


@end
