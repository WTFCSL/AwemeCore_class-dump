//
//     Generated by private class-dump
//

@class NSString, NSData, NSDate;

@interface BDPWebViewPageFrame : NSObject {
    NSString *_pkgName;
    NSData *_jsData;
    NSDate *_loadBegin;
    NSDate *_loadEnd;
    NSDate *_evalBegin;
    NSDate *_evalEnd;
}

@property (copy, nonatomic) NSString *pkgName;
@property (retain, nonatomic) NSData *jsData;
@property (retain, nonatomic) NSDate *loadBegin;
@property (retain, nonatomic) NSDate *loadEnd;
@property (retain, nonatomic) NSDate *evalBegin;
@property (retain, nonatomic) NSDate *evalEnd;

- (id)loadBegin;
- (id)loadEnd;
- (id)pkgName;
- (void)setPkgName:(id)arg0;
- (id)evalBegin;
- (id)evalEnd;
- (void)setLoadBegin:(id)arg0;
- (void)setLoadEnd:(id)arg0;
- (id)jsData;
- (void)setJsData:(id)arg0;
- (void)setEvalBegin:(id)arg0;
- (void)setEvalEnd:(id)arg0;
- (void).cxx_destruct;

@end
