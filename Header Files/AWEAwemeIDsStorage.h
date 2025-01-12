//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMapTable;

@interface AWEAwemeIDsStorage : NSObject {
    NSMutableDictionary *_leadingVideosInsertAwemeInfoDict;
    NSMutableDictionary *_customVideosInsertAwemeInfoDict;
    NSMapTable *_implementTable;
}

@property (retain, nonatomic) NSMutableDictionary *leadingVideosInsertAwemeInfoDict;
@property (retain, nonatomic) NSMutableDictionary *customVideosInsertAwemeInfoDict;
@property (retain, nonatomic) NSMapTable *implementTable;

+ (id)sharedInstance;

- (void)clearLeadingVideosInsertInfoForFeed:(long long)arg0;
- (id)leadingVideosInsertQueryParamsForFeed:(long long)arg0;
- (void)addLeadingVideosInsertAwemeIDs:(id)arg0 toFeed:(long long)arg1;
- (id)leadingVideosInsertAwemeInfoDict;
- (void)addLeadingVideosInsertAwemeIDs:(id)arg0 extraInfo:(id)arg1 toFeed:(long long)arg2;
- (void)addCustomVideosInsertAwemeIDs:(id)arg0 extraInfo:(id)arg1 toFeed:(long long)arg2;
- (id)implementTable;
- (id)customVideosInsertAwemeInfoDict;
- (id)leadingVideosInfoForFeed:(long long)arg0;
- (id)leadingVideosInsertAwemeIDsForFeed:(long long)arg0;
- (void)addCustomVideosInsertAwemeIDs:(id)arg0 toFeed:(long long)arg1;
- (void)addCustomVideosInsertImp:(id)arg0 toFeed:(long long)arg1;
- (void)setLeadingVideosInsertAwemeInfoDict:(id)arg0;
- (void)setCustomVideosInsertAwemeInfoDict:(id)arg0;
- (void)setImplementTable:(id)arg0;
- (void).cxx_destruct;

@end
