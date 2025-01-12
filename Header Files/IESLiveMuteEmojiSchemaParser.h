//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveMuteEmojiSchemaParser : NSObject <IESLiveSchemaParser> {
    NSString *_tabSource;
    NSString *_sourcePage;
}

@property (retain, nonatomic) NSString *tabSource;
@property (retain, nonatomic) NSString *sourcePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)setSourcePage:(id)arg0;
- (id)sourcePage;
- (void)handleSchemeWithModel:(id)arg0 fromInside:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)tabSource;
- (void)setTabSource:(id)arg0;
- (void).cxx_destruct;

@end
