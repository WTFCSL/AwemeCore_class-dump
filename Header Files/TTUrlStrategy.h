//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface TTUrlStrategy : NSObject {
    char _currUrlIndex;
    NSArray *_cdnUrls;
    NSString *_currUrl;
}

@property (retain) NSArray *cdnUrls;
@property char currUrlIndex;
@property (retain) NSString *currUrl;

+ (id)createUrlStrategy:(id)arg0 cdnUrlsArray:(id)arg1 urlStrategy:(long long)arg2 firstSuccessUrl:(id)arg3 isFallback2Http:(BOOL)arg4;

- (id)getUrl;
- (void)updateUrlResult:(id)arg0 error:(id)arg1;
- (id)currUrl;
- (void)setCurrUrl:(id)arg0;
- (BOOL)isPcdnMode;
- (void)setCdnUrls:(id)arg0;
- (id)cdnUrls;
- (void)setCurrUrlIndex:(char)arg0;
- (char)currUrlIndex;
- (void).cxx_destruct;

@end
