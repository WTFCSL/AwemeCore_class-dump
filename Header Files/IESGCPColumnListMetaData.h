//
//     Generated by private class-dump
//

@class IESGCPColumnListPageInfo, IESGCPColumnListExecInfo;

@interface IESGCPColumnListMetaData : NSObject {
    IESGCPColumnListPageInfo *_pageInfo;
    IESGCPColumnListExecInfo *_execInfo;
}

@property (retain, nonatomic) IESGCPColumnListPageInfo *pageInfo;
@property (retain, nonatomic) IESGCPColumnListExecInfo *execInfo;

- (id)execInfo;
- (void)setExecInfo:(id)arg0;
- (void).cxx_destruct;
- (id)pageInfo;
- (void)setPageInfo:(id)arg0;

@end
