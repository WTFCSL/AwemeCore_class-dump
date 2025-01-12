//
//     Generated by private class-dump
//

@class NSURL, NSDictionary, BFAppLink;

@interface BFURL : NSObject {
    NSURL *_targetURL;
    NSDictionary *_targetQueryParameters;
    NSDictionary *_appLinkData;
    NSDictionary *_appLinkExtras;
    BFAppLink *_appLinkReferer;
    NSURL *_inputURL;
    NSDictionary *_inputQueryParameters;
}

@property (readonly, nonatomic) NSURL *targetURL;
@property (readonly, nonatomic) NSDictionary *targetQueryParameters;
@property (readonly, nonatomic) NSDictionary *appLinkData;
@property (readonly, nonatomic) NSDictionary *appLinkExtras;
@property (readonly, nonatomic) BFAppLink *appLinkReferer;
@property (readonly, nonatomic) NSURL *inputURL;
@property (readonly, nonatomic) NSDictionary *inputQueryParameters;

+ (id)queryParametersForURL:(id)arg0;
+ (id)decodeURLString:(id)arg0;
+ (id)URLWithURL:(id)arg0;
+ (id)URLWithInboundURL:(id)arg0 sourceApplication:(id)arg1;
+ (id)URLForRenderBackToReferrerBarURL:(id)arg0;

- (id)initWithURL:(id)arg0 forOpenInboundURL:(BOOL)arg1 sourceApplication:(id)arg2 forRenderBackToReferrerBar:(BOOL)arg3;
- (id)targetQueryParameters;
- (id)appLinkExtras;
- (id)appLinkReferer;
- (id)inputQueryParameters;
- (void).cxx_destruct;
- (id)targetURL;
- (id)inputURL;
- (id)appLinkData;

@end
