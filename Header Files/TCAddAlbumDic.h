//
//     Generated by private class-dump
//

@class NSString;

@interface TCAddAlbumDic : TCAPIRequest {
    NSString *_paramAlbumname;
    NSString *_paramAlbumdesc;
    NSString *_paramPriv;
    NSString *_paramQuestion;
    NSString *_paramAnswer;
}

@property (retain, nonatomic) NSString *paramAlbumname;
@property (retain, nonatomic) NSString *paramAlbumdesc;
@property (retain, nonatomic) NSString *paramPriv;
@property (retain, nonatomic) NSString *paramQuestion;
@property (retain, nonatomic) NSString *paramAnswer;

+ (id)dictionary;

- (void)setParamAlbumname:(id)arg0;
- (void)setParamAlbumdesc:(id)arg0;
- (void)setParamPriv:(id)arg0;
- (void)setParamQuestion:(id)arg0;
- (void)setParamAnswer:(id)arg0;
- (id)paramAlbumname;
- (id)paramAlbumdesc;
- (id)paramPriv;
- (id)paramQuestion;
- (id)paramAnswer;
- (void).cxx_destruct;

@end
