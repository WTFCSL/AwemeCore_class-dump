//
//     Generated by private class-dump
//

@class AWEURLModel, NSString, AWEUserModel, AWEWelfareActivityModel;

@interface AWEMvDetailModel : AWEBaseApiModel {
    BOOL _isCollected;
    NSString *_mvID;
    NSString *_mvName;
    AWEURLModel *_iconURL;
    long long _userCount;
    NSString *_extra;
    NSString *_desc;
    AWEWelfareActivityModel *_welfareActivityModel;
    AWEUserModel *_author;
}

@property (copy, nonatomic) NSString *mvID;
@property (copy, nonatomic) NSString *mvName;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (nonatomic) long long userCount;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isCollected;
@property (retain, nonatomic) AWEWelfareActivityModel *welfareActivityModel;
@property (retain, nonatomic) AWEUserModel *author;

+ (id)iconURLJSONTransformer;
+ (id)welfareActivityModelJSONTransformer;
+ (id)placeholderModel;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (BOOL)isCollected;
- (void)setIsCollected:(BOOL)arg0;
- (id)mvID;
- (void)setMvID:(id)arg0;
- (id)welfareActivityID;
- (id)mvName;
- (void)setMvName:(id)arg0;
- (id)welfareActivityModel;
- (void)setWelfareActivityModel:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)extra;
- (id)author;
- (void)setAuthor:(id)arg0;
- (void)setDesc:(id)arg0;
- (long long)userCount;
- (void)setUserCount:(long long)arg0;

@end