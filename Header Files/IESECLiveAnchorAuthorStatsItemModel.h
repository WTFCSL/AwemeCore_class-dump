//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveAnchorAuthorStatsItemModel : MTLModel <MTLJSONSerializing> {
    NSString *_type;
    NSString *_name;
    NSString *_value;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)value;
- (id)type;
- (void)setType:(id)arg0;
- (void)setName:(id)arg0;
- (void)setValue:(id)arg0;
- (id)name;

@end
