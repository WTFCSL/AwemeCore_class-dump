//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLongPressStatusModel : MTLModel <MTLJSONSerializing> {
    long long _status_code;
    NSString *_status_msg;
    long long _recommend_status;
}

@property (nonatomic) long long status_code;
@property (copy, nonatomic) NSString *status_msg;
@property (nonatomic) long long recommend_status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)recommend_status;
- (id)status_msg;
- (void)setStatus_msg:(id)arg0;
- (void)setRecommend_status:(long long)arg0;
- (void).cxx_destruct;
- (void)setStatus_code:(long long)arg0;
- (long long)status_code;

@end
