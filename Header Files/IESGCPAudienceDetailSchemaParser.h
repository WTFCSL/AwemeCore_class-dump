//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPAudienceDetailSchemaParser : NSObject <IESGCPSchemaParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schema;

- (void)reportGameDetailLaunchStart:(id)arg0 gameId:(id)arg1 promoteScene:(unsigned long long)arg2 enterFrom:(id)arg3;
- (void)handleSchemaWithParams:(id)arg0 completion:(id /* block */)arg1;

@end