# CargoLifter Apple Mail Plugin

> This plugin for Apple Mail adds functionality to upload email attachments to a linked cloud storage provider and replace them by convenient download links in the email's body.

## About this fork

The original project that was run by Mailbutler died early 2020 (originally located at <https://github.com/Mailbutler/cargolifter-mail-plugin/>).  

Contacted Mailbutler support, got

> CargoLifter is a discontinued product. Neither download links to previous versions of the plugin nor support is provided by Mailbutler.

They even did not left the source code for the public.  
However, a snapshot provided by [@acdpnk](https://github.com/acdpnk) still exists which this is a fork of.

## Compatibility

This is a quick hack to get the plugin up and running to be used with latest *Apple Mail*, tested with [Nextcloud](https://nextcloud.com).  
No time was spent on cosmetics (no change of naming and icons from *ownCloud* to *Nextcloud* brand in *CargoLifter* source).

Tested on

* macOS 10.15.6 (19G2021)
* Apple Mail 13.4 (3608.120.23.2.1)
* Nextcloud server 19.0.3

## Build notes

* Copy `Config.example.xcconfig` to `Config.xcconfig`
* Build
* Move the product `CargoLifter.mailbundle` to `/Library/Mail/Bundles`
* Enable under Mail *Preferences : Genereal : Manage Plug-ins...*
