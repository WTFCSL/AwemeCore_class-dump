//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol HunterDynamicPatchProtocol <NSObject>

@property (readonly, copy, nonatomic) NSString *rawData;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, copy, nonatomic) NSString *serverData;
@property (readonly, nonatomic) NSDictionary *clientData;
@property (readonly, nonatomic) NSDictionary *customGlobalProps;
@property (readonly, nonatomic) NSDictionary *clientExtraData;

- (id)serverData;
- (void)updateSchema:(id)arg0;
- (id)customGlobalProps;
- (id)clientExtraData;
- (id)rawData;
- (id)clientData;
- (id)schema;

@end
