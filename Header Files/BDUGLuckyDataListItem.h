//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGLuckyDataListItem : BDUGLuckyJSONModel {
    NSString *_path;
    NSString *_replacePath;
    NSString *_replaceType;
}

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *replacePath;
@property (copy, nonatomic) NSString *replaceType;

+ (id)modelCustomPropertyMapper;

- (id)replaceType;
- (id)replacePath;
- (void)setReplacePath:(id)arg0;
- (void)setReplaceType:(id)arg0;
- (void)setPath:(id)arg0;
- (void).cxx_destruct;
- (id)path;

@end
