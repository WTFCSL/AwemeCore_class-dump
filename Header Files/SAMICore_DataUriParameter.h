//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface SAMICore_DataUriParameter : NSObject {
    long long _uriType;
    NSArray *_uris;
    NSString *_authPolicy;
    NSString *_authPolicyHeader;
}

@property (nonatomic) long long uriType;
@property (retain, nonatomic) NSArray *uris;
@property (retain, nonatomic) NSString *authPolicy;
@property (retain, nonatomic) NSString *authPolicyHeader;

- (long long)uriType;
- (void)setUriType:(long long)arg0;
- (id)authPolicy;
- (void)setAuthPolicy:(id)arg0;
- (id)authPolicyHeader;
- (void)setAuthPolicyHeader:(id)arg0;
- (id)uris;
- (void)setUris:(id)arg0;

@end
