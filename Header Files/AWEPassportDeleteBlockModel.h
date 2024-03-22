//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPassportDeleteBlockModel : MTLModel <MTLJSONSerializing> {
    double _applyTime;
    double _cancelTime;
    NSString *_avatar;
    NSString *_token;
}

@property (nonatomic) double applyTime;
@property (nonatomic) double cancelTime;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCancelTime:(double)arg0;
- (double)applyTime;
- (void)setApplyTime:(double)arg0;
- (double)cancelTime;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (id)avatar;
- (void)setAvatar:(id)arg0;

@end
