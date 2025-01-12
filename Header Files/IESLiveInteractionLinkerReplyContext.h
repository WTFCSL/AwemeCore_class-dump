//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkmicLinkAudienceReplyContext, NSObject;

@interface IESLiveInteractionLinkerReplyContext : NSObject <IESLiveInteractionLinkerReplyContextProtocol> {
    NSObject *_rawData;
    NSString *_promptString;
    NSString *_linkmicID;
    IESLiveLinkmicLinkAudienceReplyContext *_linkmicContext;
}

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceReplyContext *linkmicContext;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)linkmicID;
- (id)linkmicContext;
- (void)setLinkmicContext:(id)arg0;
- (id)initWithLinkmicLinkAudienceReplyContext:(id)arg0;
- (void).cxx_destruct;
- (id)rawData;
- (id)promptString;

@end
