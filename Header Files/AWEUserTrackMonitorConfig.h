//
//     Generated by private class-dump
//

@class NSError, NSString, NSDictionary;

@interface AWEUserTrackMonitorConfig : NSObject {
    BOOL _isSelf;
    BOOL _refresh;
    NSError *_tabError;
    NSError *_headerError;
    NSString *_currentPage;
    NSString *_tabLogName;
    NSString *_enterFrom;
    NSDictionary *_ext;
}

@property (retain, nonatomic) NSError *tabError;
@property (retain, nonatomic) NSError *headerError;
@property (copy, nonatomic) NSString *currentPage;
@property (copy, nonatomic) NSString *tabLogName;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSelf;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) BOOL refresh;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setExt:(id)arg0;
- (void)setTabLogName:(id)arg0;
- (void)setTabError:(id)arg0;
- (void)setHeaderError:(id)arg0;
- (id)tabLogName;
- (id)tabError;
- (id)headerError;
- (BOOL)refresh;
- (void).cxx_destruct;
- (void)setRefresh:(BOOL)arg0;
- (void)setCurrentPage:(id)arg0;
- (id)currentPage;
- (void)setIsSelf:(BOOL)arg0;
- (BOOL)isSelf;
- (id)ext;

@end
