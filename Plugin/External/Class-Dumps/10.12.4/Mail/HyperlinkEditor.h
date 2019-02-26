//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@class DOMHTMLAnchorElement, DOMNode, EditingMessageWebView, NSButton, NSPanel, NSString, NSTextField;

@interface HyperlinkEditor : NSObject
{
    NSPanel *_linkSheet;
    NSTextField *_linkTextField;
    NSButton *_okButton;
    NSButton *_removeButton;
    EditingMessageWebView *_webView;
    id <HyperlinkEditorDelegate> _delegate;
    DOMHTMLAnchorElement *_selectedAnchor;
    DOMNode *_selectionContents;
    NSString *_replacementLink;
}

- (void)_handleControlTextChange;
- (void)controlTextDidChange:(id)arg1;
@property(readonly, nonatomic) __weak id <HyperlinkEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editLink;
- (id)init;
- (id)initForWebView:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) NSPanel *linkSheet; // @synthesize linkSheet=_linkSheet;
@property(nonatomic) __weak NSTextField *linkTextField; // @synthesize linkTextField=_linkTextField;
@property(nonatomic) __weak NSButton *okButton; // @synthesize okButton=_okButton;
- (void)orderOutPanel:(id)arg1;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
- (void)removeSelectedLink;
@property(copy, nonatomic) NSString *replacementLink; // @synthesize replacementLink=_replacementLink;
@property(retain, nonatomic) DOMHTMLAnchorElement *selectedAnchor; // @synthesize selectedAnchor=_selectedAnchor;
@property(retain, nonatomic) DOMNode *selectionContents; // @synthesize selectionContents=_selectionContents;
@property(readonly, nonatomic) __weak EditingMessageWebView *webView; // @synthesize webView=_webView;

@end
