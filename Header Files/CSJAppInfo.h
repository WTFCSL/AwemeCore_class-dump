//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface CSJAppInfo : NSObject <CSJActionAppModel, NSCoding> {
    NSString *_appName;
    NSString *_appid;
    NSString *_downloadURL;
    double _score;
    long long _commentNum;
    long long _appSize;
    NSString *_packageName;
    NSArray *_creativeTags;
}

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *downloadURL;
@property (nonatomic) double score;
@property (nonatomic) long long commentNum;
@property (nonatomic) long long appSize;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSArray *creativeTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setupBackupWith:(id)arg0;
- (void)setCreativeTags:(id)arg0;
- (id)creativeTags;
- (long long)commentNum;
- (long long)defaultCommentNumValue;
- (double)defaultScoreValue;
- (void)setCommentNum:(long long)arg0;
- (void)setAppSize:(long long)arg0;
- (void)setupDataWithDictionary:(id)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void)setScore:(double)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (double)score;
- (void).cxx_destruct;
- (void)setDownloadURL:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)downloadURL;
- (id)dictionaryValue;
- (id)packageName;
- (void)encodeWithCoder:(id)arg0;
- (id)appid;
- (void)setAppid:(id)arg0;
- (void)setPackageName:(id)arg0;
- (long long)appSize;

@end
