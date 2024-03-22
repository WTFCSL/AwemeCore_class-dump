//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWECodeGenUrlModel : AWEBaseDataModel {
    BOOL _invalid;
    int _width;
    int _height;
    NSArray *_urlListArray;
    NSString *_urlKey;
    long long _dataSize;
    NSString *_fileHash;
    NSString *_fileCs;
    NSString *_playerAccessKey;
    NSString *_lightCoverColor;
    NSString *_darkCoverColor;
    NSString *_coverType;
    NSString *_tmplCode;
    NSString *_bgimgUrl;
}

@property (copy, nonatomic) NSArray *urlListArray;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSString *urlKey;
@property (nonatomic) long long dataSize;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) BOOL invalid;
@property (copy, nonatomic) NSString *fileCs;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (copy, nonatomic) NSString *lightCoverColor;
@property (copy, nonatomic) NSString *darkCoverColor;
@property (copy, nonatomic) NSString *coverType;
@property (copy, nonatomic) NSString *tmplCode;
@property (copy, nonatomic) NSString *bgimgUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCoverType:(id)arg0;
- (id)coverType;
- (id)playerAccessKey;
- (id)fileCs;
- (id)urlListArray;
- (void)setFileCs:(id)arg0;
- (void)setPlayerAccessKey:(id)arg0;
- (id)lightCoverColor;
- (void)setLightCoverColor:(id)arg0;
- (id)darkCoverColor;
- (void)setDarkCoverColor:(id)arg0;
- (void)setUrlListArray:(id)arg0;
- (id)tmplCode;
- (void)setTmplCode:(id)arg0;
- (id)bgimgUrl;
- (void)setBgimgUrl:(id)arg0;
- (void).cxx_destruct;
- (int)height;
- (void)setDataSize:(long long)arg0;
- (void)setInvalid:(BOOL)arg0;
- (long long)dataSize;
- (void)setWidth:(int)arg0;
- (void)setHeight:(int)arg0;
- (int)width;
- (BOOL)invalid;
- (void)setFileHash:(id)arg0;
- (id)fileHash;
- (id)urlKey;
- (void)setUrlKey:(id)arg0;

@end
