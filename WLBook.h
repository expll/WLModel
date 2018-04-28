//
//  WLBook.h
//  WLModel
//
//  Created by dachuiwang on 2018/4/11.
//  Copyright © 2018年 dachuiwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WLBook : NSObject

@property(nonatomic, strong)NSString *sourcePriority;
@property(nonatomic, strong)NSString *sourceColor;
@property(nonatomic, strong)NSString *_id;
@property(nonatomic, strong)NSString *title;
@property(nonatomic, strong)NSString *author;
@property(nonatomic, strong)NSString *cat;
@property(nonatomic, strong)NSString *cover;
@property(nonatomic, strong)NSString *shortIntro;
@property(nonatomic, strong)NSString *chaptersLink;
@property(nonatomic, strong)NSString *sourceId;
@property(nonatomic, strong)NSString *lastChapter;
@property(nonatomic, strong)NSString *updateDate;
@property(nonatomic, strong)NSString *site;
@property(nonatomic, strong)NSString *serial;
@property(nonatomic, strong)NSString *followerCount;
@property(nonatomic, strong)NSString *followerRatio; //留存
@property(nonatomic, strong)NSString *chapterCount;
@property(nonatomic, strong)NSString *size;

// 追书特有字段
@property(nonatomic, strong)NSString *zhuishu_id;

// 搜狗
@property(nonatomic, strong)NSString *sougou_id;
@property(nonatomic, strong)NSString *sougou_bkey;
@property(nonatomic, strong)NSString *sougou_md;
@property(nonatomic, strong)NSString *sougou_nameMD5;
@property(nonatomic, strong)NSString *sougou_authorMD5;
@property(nonatomic, strong)NSString *sougou_status;


@end
