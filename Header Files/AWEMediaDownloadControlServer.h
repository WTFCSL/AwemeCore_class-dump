//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWEAwemeModel, AWEAwemeACLItem;

@interface AWEMediaDownloadControlServer : HTSService <AWEShareMessage, AWEMediaDownloadControlServer> {
    AWEAwemeACLItem *_downloadStruct;
    AWEAwemeModel *_model;
    NSMutableDictionary *_downloadStructDict;
    unsigned long long _currentPanel;
    NSString *_enterFrom;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSMutableDictionary *downloadStructDict;
@property (nonatomic) unsigned long long currentPanel;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeACLItem *downloadStruct;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)endContext;
- (id)downloadStruct;
- (void)startContextWithPanelType:(unsigned long long)arg0 aweme:(id)arg1 enterFrom:(id)arg2;
- (void)setDownloadStruct:(id)arg0;
- (void)didConfigureShareView:(id)arg0 withContext:(id)arg1;
- (void)setCurrentPanel:(unsigned long long)arg0;
- (id)downloadStructDict;
- (void)p_checkDiff;
- (unsigned long long)currentPanel;
- (id)p_downloadStructWithPanelType:(unsigned long long)arg0;
- (id)p_keyWithPanelType:(unsigned long long)arg0;
- (id)p_trackKeyWithPanelType:(unsigned long long)arg0;
- (void)setDownloadStructDict:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end