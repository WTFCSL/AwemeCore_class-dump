//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEAwemeModel;

@interface AWERVListSearchModel : NSObject {
    BOOL _hasTrackedShow;
    NSArray *_queryList;
    AWEAwemeModel *_currentPlayModel;
    NSString *_enterFrom;
}

@property (copy, nonatomic) NSArray *queryList;
@property (retain, nonatomic) AWEAwemeModel *currentPlayModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL hasTrackedShow;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)currentPlayModel;
- (BOOL)hasTrackedShow;
- (void)setHasTrackedShow:(BOOL)arg0;
- (void)setCurrentPlayModel:(id)arg0;
- (void)setQueryList:(id)arg0;
- (void).cxx_destruct;
- (id)queryList;

@end