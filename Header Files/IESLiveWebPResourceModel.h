//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveWebPResourceModel : IESLiveDynamicModel

@property (copy, nonatomic) NSString *portraitUrlStr;
@property (copy, nonatomic) NSString *landscapeUrlStr;
@property (nonatomic) unsigned long long currentOrientation;

- (id)currentUrl;
- (id)createDecoderWithOrientation:(unsigned long long)arg0;
- (void)_parseConfigFileWithDirectory:(id)arg0;
- (id)initWithDirectory:(id)arg0;

@end