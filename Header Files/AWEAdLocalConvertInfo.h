//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdLocalConvertInfo : NSObject <NSCoding> {
    NSString *_adConvertAppID;
    NSString *_webURL;
    double _feedBackDate;
}

@property (copy, nonatomic) NSString *adConvertAppID;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) double feedBackDate;

- (id)adConvertAppID;
- (double)feedBackDate;
- (void)setAdConvertAppID:(id)arg0;
- (void)setFeedBackDate:(double)arg0;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
