//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEFeedCommentBarConfig : AWEBaseApiModel {
    long long _type;
    NSString *_barID;
    NSString *_title;
    NSString *_url;
    NSString *_intro;
    NSString *_extra;
    long long _expireTime;
    AWEURLModel *_lightIconUrls;
    AWEURLModel *_darkIconUrls;
    long long _priorityType;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *barID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) AWEURLModel *lightIconUrls;
@property (retain, nonatomic) AWEURLModel *darkIconUrls;
@property (nonatomic) long long priorityType;

+ (id)lightIconUrlsJSONTransformer;
+ (id)darkIconUrlsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (long long)priorityType;
- (void)setPriorityType:(long long)arg0;
- (id)barID;
- (id)darkIconUrls;
- (id)lightIconUrls;
- (void)setIntro:(id)arg0;
- (void)setBarID:(id)arg0;
- (void)setLightIconUrls:(id)arg0;
- (void)setDarkIconUrls:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setUrl:(id)arg0;
- (id)extra;
- (id)title;
- (void)setType:(long long)arg0;
- (id)url;
- (void)setTitle:(id)arg0;
- (long long)expireTime;
- (void)setExpireTime:(long long)arg0;
- (id)intro;

@end
