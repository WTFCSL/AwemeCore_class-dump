//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESECActionLogNodeEventTracking : IESECActionLogNodeBase {
    NSString *_event;
    NSDictionary *_params;
}

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSDictionary *params;

- (void)setEvent:(id)arg0;
- (id)event;
- (id)info;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)type;
- (id)initWithCoder:(id)arg0;
- (id)params;
- (void)encodeWithCoder:(id)arg0;
- (void)setParams:(id)arg0;

@end
