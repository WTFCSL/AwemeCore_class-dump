//
//     Generated by private class-dump
//

@class NSString, NSArray;

@protocol ACCSideslipPropDataModelProtocol <NSObject>

@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *iconDownloadURLs;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL isDownloaded;
@property (readonly, nonatomic) id rawModel;

- (id)rawModel;
- (id)iconDownloadURLs;
- (BOOL)isDownloadable;
- (id)modelID;
- (id)name;
- (BOOL)isDownloaded;

@end