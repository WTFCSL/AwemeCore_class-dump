//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveOpenSchemaModel : MTLModel <MTLJSONSerializing> {
    NSString *_liveSchema;
    NSString *_liveWithProductSchema;
}

@property (copy, nonatomic) NSString *liveSchema;
@property (copy, nonatomic) NSString *liveWithProductSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)liveSchema;
- (void)setLiveSchema:(id)arg0;
- (id)liveWithProductSchema;
- (void)setLiveWithProductSchema:(id)arg0;
- (void).cxx_destruct;

@end
