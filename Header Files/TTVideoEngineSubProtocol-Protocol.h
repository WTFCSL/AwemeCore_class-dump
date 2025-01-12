//
//     Generated by private class-dump
//

@class NSString;

@protocol TTVideoEngineSubProtocol <NSObject>

@property (readonly, nonatomic) long long languageId;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *format;
@property (readonly, nonatomic) long long subtitleId;

- (long long)languageId;
- (long long)subtitleId;
- (id)urlString;
- (id)toDictionary;
- (id)format;
- (id)jsonString;

@end
