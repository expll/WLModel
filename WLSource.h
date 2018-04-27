//
//  WLSource.h
//  WLModel
//
//  Created by dachuiwang on 2018/4/11.
//  Copyright © 2018年 dachuiwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WLSource : NSObject

@property(nonatomic, strong)NSString *_id;
@property(nonatomic, strong)NSString *sourceName;
@property(nonatomic, strong)NSString *priority;
@property(nonatomic, strong)NSString *chaptersLink;
@property (nonatomic, strong)NSString *searchUrl;
@property(nonatomic, strong)NSString *lastedChapter;
@property(nonatomic, strong)NSString *searchsLink;
@property(nonatomic, strong)NSString *bodyLink;


@end
