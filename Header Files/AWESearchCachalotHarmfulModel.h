//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchCachalotHarmfulModel : NSObject {
    BOOL _isHarmfulSpeech;
    NSString *_fullString;
    NSString *_linkString;
    NSString *_linkURL;
}

@property (nonatomic) BOOL isHarmfulSpeech;
@property (retain, nonatomic) NSString *fullString;
@property (retain, nonatomic) NSString *linkString;
@property (retain, nonatomic) NSString *linkURL;

+ (id)modelWithNilInfo:(id)arg0 nilText:(id)arg1;

- (void)setFullString:(id)arg0;
- (id)linkString;
- (void)setLinkString:(id)arg0;
- (BOOL)isHarmfulSpeech;
- (void)setIsHarmfulSpeech:(BOOL)arg0;
- (void).cxx_destruct;
- (id)fullString;
- (id)linkURL;
- (void)setLinkURL:(id)arg0;

@end
