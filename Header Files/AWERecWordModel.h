//
//     Generated by private class-dump
//

@class NSString, AWERecWordLocalStatusModel;

@interface AWERecWordModel : AWEBaseApiModel {
    BOOL _recordWordAlreadyDisappear;
    NSString *_text;
    long long _createTime;
    long long _type;
    long long _status;
    long long _userReaction;
    AWERecWordLocalStatusModel *_localStatus;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long createTime;
@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (nonatomic) long long userReaction;
@property (retain, nonatomic) AWERecWordLocalStatusModel *localStatus;
@property (nonatomic) BOOL recordWordAlreadyDisappear;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)recordWordAlreadyDisappear;
- (void)setRecordWordAlreadyDisappear:(BOOL)arg0;
- (long long)userReaction;
- (void)setUserReaction:(long long)arg0;
- (void)setLocalStatus:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setText:(id)arg0;
- (void)setCreateTime:(long long)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setStatus:(long long)arg0;
- (long long)createTime;
- (id)text;
- (id)localStatus;

@end
