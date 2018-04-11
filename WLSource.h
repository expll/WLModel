//
//  WLSource.h
//  WLModel
//
//  Created by dachuiwang on 2018/4/11.
//  Copyright © 2018年 dachuiwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WLSource : NSObject

@property(nonatomic, strong)NSArray  *bodyRegex;
@property(nonatomic, strong)NSString *_id;
@property(nonatomic, strong)NSString *priority;
@property(nonatomic, strong)NSString *color;
@property(nonatomic, strong)NSString *chaptersLink;
@property(nonatomic, strong)NSString *bodyLink; //搜狗源会用到
@property(nonatomic, strong)NSString *sougou_searchsLink; //搜狗源会用到
@property(nonatomic, strong)NSString *sourceName;
@property(nonatomic, strong)NSString *encodeType;

@property(nonatomic, strong)NSString *contentType; //0：html伪代码， 1：实际最后内容（执行js之后的结果）


@property (nonatomic, strong)NSString *encodeType_Body;
@property (nonatomic, strong)NSString *encodeType_Chapters;
@property (nonatomic, strong)NSString *searchUrl;
@property (nonatomic, strong)NSDictionary *bookInfoRegex;
@property (nonatomic, strong)NSDictionary *chapterInfoRegex;
@property (nonatomic, strong)NSDictionary *chapterBodyRegex;
@property (nonatomic, strong)NSArray *flip;  //过滤
@property (nonatomic, strong)NSArray *replace; // 处理前过滤
@property (nonatomic, strong)NSArray *replaceBody; // Body需要最后过滤
@property (nonatomic, strong)NSArray *comBodyRegex; // 通用的过滤

@end
