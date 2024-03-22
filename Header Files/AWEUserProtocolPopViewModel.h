//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEUserProtocolPopViewModel : NSObject {
    NSString *_text;
    NSArray *_linkArray;
    NSArray *_urlArray;
    NSDictionary *_trackInfo;
    NSString *_buttonText;
    long long _popViewStyle;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *linkArray;
@property (copy, nonatomic) NSArray *urlArray;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long popViewStyle;

+ (id)createDefaultModel;

- (void)setUrlArray:(id)arg0;
- (id)urlArray;
- (long long)popViewStyle;
- (void)setPopViewStyle:(long long)arg0;
- (void)setLinkArray:(id)arg0;
- (id)linkArray;
- (void)updateTextWithPopViewStyle:(long long)arg0 carrierServiceString:(id)arg1;
- (void)modifyContentWithPopViewStyle:(long long)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (id)buttonText;
- (void)setButtonText:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;

@end
