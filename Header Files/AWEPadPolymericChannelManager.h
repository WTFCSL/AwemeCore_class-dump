//
//     Generated by private class-dump
//

@class AWEPadListViewSectionFactory, NSDictionary;

@interface AWEPadPolymericChannelManager : NSObject {
    NSDictionary *_pageTitleMap;
    AWEPadListViewSectionFactory *_listViewSectionFactory;
}

@property (retain, nonatomic) AWEPadListViewSectionFactory *listViewSectionFactory;
@property (retain, nonatomic) NSDictionary *pageTitleMap;

+ (id)sharedManager;

- (id)buildSectionListWithRawData:(id)arg0 pageKey:(id)arg1 enableGrid:(BOOL)arg2 enableLight:(BOOL)arg3;
- (id)pageTitleMap;
- (id)discardedArchPageKeySet;
- (id)listViewSectionFactory;
- (id)localBreakPointEnablePageKeyArray;
- (id)listViewSectionFactoryWithPageKey:(id)arg0 enableGrid:(BOOL)arg1;
- (BOOL)enableBreakPointWithPageKey:(id)arg0;
- (void)setPageTitleMap:(id)arg0;
- (void)setListViewSectionFactory:(id)arg0;
- (void).cxx_destruct;

@end
