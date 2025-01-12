//
//     Generated by private class-dump
//

@class AWETemplateListTemplateInfoResponseModel, NSString, NSArray;

@interface ACCSideslipTemplateDataModelWapper : NSObject <ACCSideslipPropDataModelProtocol> {
    AWETemplateListTemplateInfoResponseModel *_rawModel;
}

@property (retain, nonatomic) AWETemplateListTemplateInfoResponseModel *rawModel;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *iconDownloadURLs;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL isDownloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rawModel;
- (void)setRawModel:(id)arg0;
- (id)iconDownloadURLs;
- (id)initWithRawModel:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg0;
- (BOOL)isDownloadable;
- (id)modelID;
- (id)name;
- (BOOL)isDownloaded;

@end
